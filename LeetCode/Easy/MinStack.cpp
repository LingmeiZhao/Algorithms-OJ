class MinStack {
public:
    /** initialize your data structure here. */
     int capacity;
     int *values;
     int size;
    
    MinStack() {
         this->capacity = 4;
        this->size	 = 0;
        this->values   = new int[this->capacity];
    }

    void push(int x) {
        if (this->capacity == this->size)
        {   
        this->Expend();
        }

        this->values[this->size] = x;
       this->size++;    
    }
    
    void Expend()
    {
    constexpr int factor = 2;
    int new_capacity	 = this->capacity * factor;
    int *new_values   = new int[new_capacity];
    for (int i = 0; i < this->size; i++)
    {
        new_values[i] = this->values[i];
    }
    delete[] this->values;
    this->values=new_values;
    this->capacity=new_capacity;
}
    
    void pop() {
        this->size--;
    }
    
    int top() {
         return this->values[this->size-1];
    }
    
    int getMin() {
        int minimum=values[0];
        for(int i = 1; i<  this->size ; i++)
        {
                if(values[i]< minimum)
                {
                    minimum = values[i];
                }
        }
        return minimum;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */ 
