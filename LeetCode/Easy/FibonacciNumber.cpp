/* Method 1*/
class Solution {
public:
    int fib(int N) {
        if(N==0){
            return 0;
        }else if(N==1)
        {
            return 1;
        }else
        {
            return fib(N-1) + fib(N-2);
        }
    }
}; 

/* Method 2*/
class Solution {
public:
    int fib(int N) {
        if(N == 1)
        {
            return 1;
        }
        else {
         
        int a = 0, b = 1;
        int c = 0;
        for(int i = 1 ; i <N; i++)
        {
            c  = a + b;
            a = b;
            b = c;
        }
       return c;
    }

    }
};
