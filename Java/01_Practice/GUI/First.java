import java.awt.*;
import javax.swing.*;
class First
{
    public static void main(String[] args)
    {
        JFrame fr = new JFrame("Text");
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setResizable(false);
        fr.setSize(420,420);
        fr.getContentPane().setBackground(Color.GRAY);
        fr.setVisible(true);
    }
}