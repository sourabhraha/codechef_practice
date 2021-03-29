// Sourabh raha
#include<stdio.h>
#include<stdbool.h>
#include<vector>

#define MAX 1000002
typedef long long int ll;

ll store_prime_cnt[MAX];
void Sieve_Prime();

void Sieve_Prime(){

    bool arr[MAX];
    std::vector<ll>prime;
	ll i,j; 
    ll ptr = 0; 
    ll prime_cnt = 0;
    
    for(i=0; i<MAX; i++)
        arr[i] = true;                  // Initialization

    for(i=2; i<MAX; i++){           // Getting indices of Prime numbers

        if(arr[i] == true){

            for(j = i*i; j<MAX; j+=i)
                arr[j] = false;
        }
    }

    for(i=2; i<MAX; i++)            // Storing Only Prime numbers
        {
            if(arr[i] == true)
                prime.push_back(i);
        }
    
    for(i=0; i<MAX; i++){          // Counting Prime numbers within a range

        if(prime[ptr] <= i)
            {
                prime_cnt++;
                ptr++;
            }
        store_prime_cnt[i] = prime_cnt;
    }

}

int main(){


    int test_cases;
    scanf("%d",&test_cases);

    Sieve_Prime();              // Storing values in array

    while (test_cases--)
    {
        int x,y;
        scanf("%d%d",&x,&y);

        if(store_prime_cnt[x] <= y)
            {
                printf("Chef\n");
            }
        else{
                printf("Divyam\n");
            }
    }
    return 0;
}
