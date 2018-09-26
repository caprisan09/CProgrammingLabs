#define M 52
#define N 52
#include<stdio.h>
#include<assert.h>
#include<time.h>

int main(){
int in, im;

im = 0;
int vektor[52];
int r[52];
srand(time(NULL));
for (in = 0; in < N && im < M; ++in) {
  int rn = N - in;
  int rm = M - im;
  //srand(time(NULL));
  if (rand() % rn < rm)    
    /* Take it */
    vektor[im++] = in + 1; /* +1 since your range begins from 1 */
	
}

//srand(time(NULL));
for (int i = 51; i >= 0; --i){
    //generate a random number [0, n-1]
    int j = rand() % (i+1);

    //swap the last element with element at random index
    int temp = vektor[i];
    vektor[i] = vektor[j];
    vektor[j] = temp;
}

assert(im == M);
for(int i=0; i<52; i++){
printf("%d\n", vektor[i]);
}
}
