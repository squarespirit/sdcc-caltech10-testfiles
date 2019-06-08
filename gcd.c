unsigned char a, b;
void main() {
    a = 42;
    b = 155;
    while (a != b) {
        if (a > b)
           a -= b; 
        else
           b -= a;
    }
}

