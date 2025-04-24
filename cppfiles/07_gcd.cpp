int gcdRec(int a, int b) {
    return (b == 0) ? a : gcdRec(b, a % b);
}

int gcdIter(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}