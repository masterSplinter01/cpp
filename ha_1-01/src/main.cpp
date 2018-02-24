#include "hashtable.h"

#include <exception>
#include <random>
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;
using namespace cpp_assignment;

#define MAX_TEST_SIZE 10000
#define MAX_MODULO 100
#define MAX_ATTEMPT 10

vector<int> RandomVector(size_t size, int32_t modulo) {
    random_device device;
    mt19937 generator(device());
    uniform_int_distribution<int> distribution(-modulo, modulo);

    vector<int> result(size);
    for (int &item : result) {
        item = distribution(device);
    }

    return result;
}

template<class Test>
void RunTest(Test test) {
    for (size_t size = 0; size < MAX_TEST_SIZE; size += 100) {
        cout << "Size: " << size << endl;
        for (int32_t modulo = 1; modulo < MAX_MODULO; modulo += 7) {
            for (size_t attempt = 0; attempt < MAX_ATTEMPT; ++attempt) {
                test(size, modulo);
            }
        }
    }
}

template<class Iterable>
void Show(Iterable iterable) {
    for (auto item : iterable) {
        cout << item << " ";
    }

    cout << endl;
}

void Fail(const string &test_name, const string &input, const string &expected, const string &result) {
    cout << "FAIL test: " << test_name << endl
         << "input: " << input << endl
         << "expected: " << expected << endl
         << "result: " << result << endl;
    exit(1);
}

void CreateAndCompare(size_t size, int32_t modulo) {
    vector<int> keys = RandomVector(size, modulo);
    vector<int> values = RandomVector(size, modulo);

    hash_table *table = create();
    unordered_map<int, int> pattern;
    for (size_t i = 0; i < size; ++i) {
        int key = keys[i];
        int value = values[i];

        if (contains(table, key)) {
            continue;
        }

        insert(table, key, value);
        pattern[key] = value;
    }
    for (auto pair : pattern) {
        assert(*get(table, pair.first) == pair.second);
    }

    assert(::size(table) == pattern.size());
    destroy(table);
}

void Clear(size_t size, int32_t modulo) {
    vector<int> keys = RandomVector(size, modulo);
    vector<int> values = RandomVector(size, modulo);

    hash_table *table = create();
    for (size_t i = 0; i < size; ++i) {
        int key = keys[i];
        int value = values[i];

        insert(table, key, value);
    }

    clear(table);

    assert(::size(table) == 0);
    for (int &key : keys) {
        assert(!contains(table, key));
    }

    destroy(table);
}

void CreateRemoveAndCompare(size_t size, int32_t modulo) {
    if (size < 4) {
        return;
    }

    vector<int> keys = RandomVector(size, modulo);
    vector<int> values = RandomVector(size, modulo);

    hash_table *table = create();
    unordered_map<int, int> pattern;
    for (size_t i = 0; i < size; ++i) {
        int key = keys[i];
        int value = values[i];

        if (contains(table, key)) {
            continue;
        }

        insert(table, key, value);
        pattern[key] = value;
    }

    vector<int> remove_keys = RandomVector(size, modulo);
    for (int &key : remove_keys) {
        pattern.erase(key);
        erase(table, key);
    }

    for (auto pair : pattern) {

        assert(*get(table, pair.first) == pair.second);

    }

    assert(::size(table) == pattern.size());
    destroy(table);
}

int main(int argc, char **argv) {
    RunTest(CreateAndCompare);
    RunTest(Clear);
    RunTest(CreateRemoveAndCompare);

    return 0;
}