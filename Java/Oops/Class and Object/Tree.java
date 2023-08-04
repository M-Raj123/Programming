class Tree 
{

    double height;
    double diameter;
    TreeType treeType;

    Tree(double height, double diameter, TreeType treeType)
    {
        this.height   = height ;
        this.diameter = diameter ;
        this.treeType = treeType ;
    }

    void grow()
    {
        this.height = this.height + 10 ;
        this.diameter = this.diameter + 1 ;
    }

    void announceTallTree()
    {
        if(this.height > 100)
        {
            System.out.println(this.treeType +" Tall Tree");
        }
    }
  
}
