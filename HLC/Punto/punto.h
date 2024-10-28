class Punto{
    private:
        int x;
        int y;

    public:
        //constructor
        Punto(int x = 0, int y = 0);
        // destructor 

        // Constructor copia
        Punto(Punto &p);

        //get/set

        void setX( int x);
            
        int getX();
        int getY();
        void setX( int x);
        void setY( int y);      

}