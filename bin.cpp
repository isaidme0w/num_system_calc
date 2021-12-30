int numbers(int a) {

    int b = 1;
    int count = 0;

    while(a >= b) {
        b *= 2;
        count++;
    }

    return count;
}

void fill(int (&tab)[], int hwnm, int &b) {
    tab[0] = b;

    for(int i = 1;i < hwnm; i++) {
        b *= 2;
        tab[i] = b;
    }
}

void calculate(int hwnm, int (&output)[], int tab[], int input) {

    int summary = 0;
    int j = hwnm - 1;

    for ( int i = 0; i < hwnm; i++ ) {

        summary += tab[j];
        if( summary <= input ) {
            output[i] = 1;
        }
        else {
            output[i] = 0;
            summary -= tab[j];
        }
        j--;
    }
}