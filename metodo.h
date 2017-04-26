#ifndef METODO_H
#define METODO_H

class Simpson{
    private:
        float b,a, z1,ints, func, count=0,z3=0,res;
        int n, i=0;
        double e = 2.71828;
    public:
        void datos();
        void calculos();
        void resultado();
};
void Simpson::datos() {
    std::cout << "Ingresa los limites a y b: " <<std::endl;
    std::cout<<"a ->";std::cin >> a;
    std::cout<<"b ->";std::cin >> b;
    std::cout << "Ingresa el numero de intervalos: " <<std::endl;
    std::cin >> n;
}
void Simpson::calculos() {
    float z2[n];
    int sep_inter = (b-a)/n;
    z1 = (b-a)/(3*n);
    //FOR PRINCIPAL, HACE LA SUMATORIA CON TODOS LOS INTERVALOS
    for (a; a <= b; a += sep_inter){
      z2[i] = (sep_inter*sin(5*pow(sep_inter,2)));
      i++;
    }
    //FOR SECUANDARIO, ESTE FOR MULTIPLICA * 4 Y LUEGO POR 2 DESDE (i..n-1)
    int inc = 2;
    for (int i = 1; i <= n-1; i++){
      if(i%2 != 0)inc = 4;else inc == 2;
      z3 += z2[i] * inc;
    }
    //SUMATORIA DE LOS EXTREMOS + LO DE EN MEDIO
    res = z3 + z2[0] + z2[n];
    std::cout <<"R: " << res * z1<<std::endl;
}  
#endif
