int main(){
    long long loop_max = 1000000000;
    long long loop_no = 0;
    int a = 2;
    int b = 4;
    int sum;
    int quotient;
    int product;

    auto start_time = chrono::steady_clock::now();
    while (loop_no < loop_max) // while loop runs 10^9 times
    {

        for (int i=0; i<10; i++){ // addition, done 10 time per loop
        sum = a + b;
    }

    for (int i=0; i<5; i++){ // multiplication, done 5 time per loop
        product = a * b;
    }
    for (int i=0; i<2; i++){ // division, done 2 time per loop
        quotient = a / b;
    }
    loop_no ++;

    }
    auto end_time = chrono::steady_clock::now();
    cout << "Time for integer operations: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;
    return 0;
}