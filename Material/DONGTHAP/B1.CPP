using namespace std;

int reverse_number(int &n) {
    int rev_n = 0;
    if (n<10) return rev_n+=n;
    else {
        rev_n += n%10;
        return((n-n%10)/10);
    }
}

int friendly_numbers(int a, int b) {
    if (a%b==0) return true;
    return friendly_numbers(b, a%b);
}

int main() {
    int numbers[0]; int a, b; int x = 0; int rev = 0;
    for (int i = a; i <= b; i++) {
        numbers[i] = i;
        x++;
    }

    for (int i = 0; i < b-a; i++) {
        
    }
}