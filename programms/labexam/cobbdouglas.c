#include<stdio.h>

double power(int e,int x);

int main(){
    int arr[11],brr[11];
    double q[11];
    for(int i=-5;i<=5;i++)
    {
        arr[i+5]=i;
        printf("%d\t",arr[i+5]);
    }
    printf("\n-----------------------------------------------------------------------------------------\n");
    int k=0;
    for(int i=6;i>=-4;i--)
    {
        brr[k]=i;
        printf("%d\t",brr[k]);
        k++;
    }
    printf("\n-------------------------------------------------------------------------------------------\n");
    for(int i=0;i<11;i++)
    {
        q[i] = (0.5)*(power(6,arr[i]))*power(10,brr[i]);
        printf("%lf\t",q[i]);
    }
    return 0;
}

double power(int e,int x){
    if(x<0){
        return 1.0/(double)power(e, (-x));
    }

    double result = 1;
    for(int i=1; i<=x; i++){
        result=e*result;
    }
    return result;
}


/*#include<stdio.h>

double power(int x,int y);
void cobbDouglas(double A,int L,int K,int Q[11]);

int main(){
        double A=0.5;
	int L=6,K=10;
        int Q[11];
        cobbDouglas(A,L,K,Q);
	int max=Q[0];
        for(int i=0; i<10; i++){
		
		if(Q[i]<Q[i+1]){
		max=Q[i+1];
		}
	}
        printf("Maximum value of cobb-Douglas: %d\n",max);
        
        
        return 0;
}

double power(int x,int y){
        if(y==0){
                return 1;
        }else if(y<0){
            return 1.0/power(x,(-y));
        }else {
                return x*power(x,y-1);
        }
}

void cobbDouglas(double A,int L,int K,int Q[11]){
    
    for(int i=-5; i<=5; i++){
        int a=i;
        int b=1-a;
        Q[i+5]=A*power(L,a)*power(K,b);
    }

}*/
