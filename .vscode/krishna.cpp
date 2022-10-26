void printTable(int start, int end, int step) {
    int cel = 1;
    for(int i=start; i <= end; i+=step){
        cel = (i-32) * 5/9.0;
        cout<< i << "\t"<<cel << endl;
    }
}

////////////////////////

bool checkMember(int n){
    int a = 0; 
    int b = 1;
    int c;
   while(a < n)
   {
       c = a + b;
       a = b;
       b = c;
   }
    if(a == n)
    {return true;}
    else
        return false;
}
///////////////////