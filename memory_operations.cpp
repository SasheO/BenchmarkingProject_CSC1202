int main(){
    int *ptr;
    int arr[50000];
    ptr = arr; // store the address of the first element of arr in ptr
    long long loop_max = 500000;
    long long loop_no = 0;
    int a;
    int b = 11;

    auto start_time = chrono::steady_clock::now();
    for (int i = 0; i < 100000; i++){ // runs 10^4 times
    while (loop_no < loop_max) // while loop runs 5 * 10^5 times
    {
        a = *ptr; // read from memory

        *ptr = b; // write to memory

        ptr = ptr + 1; // move to the next slot in memory

        loop_no++;
    }

    ptr = arr; // set pointer back to beginning of array in next loop

    }

    auto end_time = chrono::steady_clock::now();
    cout << "Time for memory operations: " << chrono::duration_cast<chrono::nanoseconds>(end_time - start_time).count() << " ns" << endl;


    return 0;
}