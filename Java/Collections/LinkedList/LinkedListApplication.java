import java.util.*;

class LinkedListApplication {
    
    private static List<Integer> list = new LinkedList<>();
    static int ptr=1;
    static int cap;
    public static void move_next() {
        if(ptr<cap){
            ptr++;
        }
        else{
            System.out.println("ended");
        }
    }

    public static void move_prev() {
        if(ptr>1)
        {
            ptr--;
            //System.out.print();
        }else{
            System.out.println("No previous slide");
        }
    }

    public static void remove_currentSlide() {
        if(cap>0){
            cap = cap-1;
            list.remove(ptr-1);
            ptr--;
        }
    }

    public static void total_size(int size) {
        cap = size;
        for(int i=1;i<=size;i++)
        {
            list.add(i);
        }    
        System.out.println(list);
    }

    public static void copy() {
        LinkedList<Integer> cpy = new LinkedList<>(); 
        cpy = (LinkedList) list.clone();
        System.out.println(cpy);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

    
        System.out.println("Enter the Size of Slide");
        int size = sc.nextInt();
        total_size(size);
        int choice=0;
        do{
            System.out.println();
            if(ptr>0){
                System.out.println("current_Slide --> "+list.get(ptr-1));
            }else{
                System.out.println("Empty");
            }
            System.out.println("press 1 --> move_next");
            System.out.println("press 2 --> move_prev");
            System.out.println("press 3 --> copy");
            System.out.println("press 4 --> remove_currentSlide");
            
            choice = sc.nextInt();
            
            
            if(choice==1)
            {
                move_next();
            }
            else if(choice==2)
            {
                move_prev();
            }
            else if(choice==3)
            {
                copy();
            }
            else if(choice==4)
            {
                remove_currentSlide();
            }

        }while(choice<10);
        
        sc.close();
    }
}
