unsigned char square(unsigned char x) {
    unsigned char res = 0;
    for (unsigned char i = 0; i < x; i++) {
        res += x;
    }
    return res;
}
unsigned char g;
void main() {
    g = square(10);
}
