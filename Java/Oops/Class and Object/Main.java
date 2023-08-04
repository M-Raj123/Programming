class Main
{
    public static void main(String[] args) 
    {
  
        Tree myTree = new Tree(100,2,TreeType.PINE);
        myTree.announceTallTree();

        Tree uTree = new Tree(110,2,TreeType.OAK);
        uTree.announceTallTree();

        myTree.grow();
        myTree.announceTallTree();

    }
}

/*
output:
OAK Tall Tree
PINE Tall Tree
*/
