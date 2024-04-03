
int soma(int n){
    int result;
    if(n == 1){
        return 1;
    }else{
        result = n + soma(n - 1);
    }
}

void DecBin(int dec){
    int n;
    
    if(dec/2 != 0){
        n = dec/2;
        DecBin(n);
        printf("%d", dec%2);
    }else{
        printf("%d", dec%2);
    }
}

int Maximo(int n, int vet[]){
    int max;
    if(n == 1)
        max = vet[0];
    else{
        max = Maximo(n-1, vet);
        if(max < vet[n-1])
            max = vet[n-1];
    }
    return max;
}   

int Pot(int base, int ex){
    int x;
    if(ex == 0){
        return (x = 1);
    }else{
        x = base * Pot(base, ex - 1);
    }
}

int Par(int vet[], int c, int b){
    if(b == 0)
        return c;
    else{
        c = Par(vet, c, b-1);
        if(vet[b-1]%2 == 0)
            c++;
    }
    return c;
}
