//hozzon létre a heapen egy alma nevű integer tömböt 5 mérettel, majd deallokáld
#define size 5

int main(){
    int *alma = new int[size];

    delete[] alma; //deallocate
    return 0;
}
