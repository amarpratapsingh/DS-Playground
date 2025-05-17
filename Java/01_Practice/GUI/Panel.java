import javax.swing.*;
import java.awt.*;
public class Panel 
{
    public static void main(String[] args)
    {

        JPanel Grayjp = new JPanel();
        Grayjp.setBackground(Color.GRAY);
        Grayjp.setBounds(0,0,100, 100);
        JFrame fr = new JFrame();
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setSize(750,750);
        fr.setLayout(null);
        fr.add(Grayjp);
        fr.setVisible(true);
    }
    
}