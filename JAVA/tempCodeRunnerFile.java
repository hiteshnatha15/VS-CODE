
 class square extends ShapeCalculator
 {
    int side;
    square(int side)
    {
        this.side=side;
    }
    
    public void calculateArea()
    {
        System.out.println("area= "+side*side);
    }
 }