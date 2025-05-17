import javax.swing.*;

class Label
{
    public static void main(String[] args)
    {
        JLabel jl = new JLabel("String" , SwingConstants.CENTER);
        JFrame fr = new JFrame();        
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setSize(420,420);
        fr.setTitle("Title");
        fr.getContentPane().add(jl);
        fr.add(jl);
        fr.setVisible(true);
    }
}