class xstack{
    int []ar;                               // array
    int sz;                                 // size
    int sp;                                 // stack pointer
    public xstack(int sz){                  // constructor with size
        this.ar = new int[sz];
        this.sz = sz; 
        this.sp = sz;
    }
    public void push(int d){
        this.ar[--sp] = d;
    }
    public int pop(){
        return this.ar[sp++];
    }
    public int peek(){
        return this.ar[sp];
    }
    public boolean empty(){
        return sp == sz;
    }
    public int size(){
        return sz-sp;
    }
    public void swap(xstack othr){
        int []tempar = othr.ar;
        int tempsz = othr.sz;
        int tempsp = othr.sp;
        othr.ar = this.ar;
        othr.sz = this.sz;
        othr.sp = this.sp;
        this.ar = tempar;
        this.sz = tempsz;
        this.sp = tempsp;
    }
}
