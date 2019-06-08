volatile unsigned char a, b, c;
void main() {
    a = 1;
    b = 1;
    c = ~a;
    c = -a;
    c = a + b;
    c = a - b;
    // c = a * b;
    // c = a / b;
    // c = a % b;
    // c = a && b;
    // c = a || b;
    c = a ^ b;
    c = a | b;
    c = a & b;
}
