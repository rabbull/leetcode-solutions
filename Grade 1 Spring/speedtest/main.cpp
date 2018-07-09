#include <iostream>
#include <chrono>
#include <vector>
#include <climits>

using namespace std;

void exp1(int);
void exp2(int);
void exp3(long long);
void exp0(long long);
double timeUsed(void(long long), long long);

int main() {
    int cnt = 0;
//    auto fp1 = fopen("output1.dat", "w"), fp2 = fopen("output2.dat", "w");
//
//    for (int i = 0; i < 1e9; i ++) {
//        double t1 = timeUsed(exp1, (int) 1e6);
//        double t2 = timeUsed(exp2, (int) 1e6);
//        fprintf (fp1, "%-10d%.6lf\n", i, t1);
//        fprintf (fp2, "%-10d%.6lf\n", i, t2);
//    }
    double avg = 0;
    auto fp = fopen("if.dat", "w");
    for (int i = 0; i < 1e6; i ++) {
        double t = timeUsed(exp3, 1e6);
        avg += t;
        cout << t << endl;
    }
    avg /= 1e6;
    cout << "------ avg ------" << endl;
    cout << avg << endl;
}

void exp1(int times) {
    int x = 0;
    for (int i = 0; i < times; i ++) {
        x ++;
        x --;
    }
}

void exp2(int times) {
    int x = 0;
    for (int i = 0; i < times; i ++) {
        x += 1;
        x -= 1;
    }
}

void exp0(long long times) {
    for (int i = 0; i < times; i ++) ;
}

void exp3(long long times) {
    for (int i = 0; i < times; i ++) times += 0;
}

double timeUsed(void foo(long long), long long times) {
    chrono::steady_clock::time_point start = chrono::steady_clock::now();
    foo(times);
    chrono::steady_clock::time_point end = chrono::steady_clock::now();
    auto dt = end - start;
    start = chrono::steady_clock::now();
    exp0(times);
    end = chrono::steady_clock::now();
    auto dt0 = end - start;
    return (dt - dt0).count();
}