
class Rectangulo
{
    private:
        int base;
        int altura;

    public: 
        
        Rectangulo(int b = 1 ,int a = 1);
        int area() const;
        int perimetro() const;
        void imprime() const;
        
};