package Swing;
import javax.swing.*;
import java.awt.event.*;
import java.awt.Color;

public class traffic extends JFrame implements ActionListener{
    JButton b1,b2,b3;
    JRadioButton r1,r2,r3;
    traffic()
    {
        setVisible(true);
        setSize(500,500);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(null);
        b1=new JButton("TRAFFIC LIGHT");
       
        b1.setBounds(10,10,100,100);
        
        add(b1);
        
        r1=new JRadioButton("RED");
        r2=new JRadioButton("YELLOW");
        r3=new JRadioButton("GREEN");
        r1.setBounds(10,110,100,100);
        r2.setBounds(110,110,100,100);
        r3.setBounds(210,110,100,100);
        ButtonGroup bg=new ButtonGroup();
        bg.add(r1);
        bg.add(r2);
        bg.add(r3);
        r1.addActionListener(this);
        r2.addActionListener(this);
        r3.addActionListener(this);

        add(r1);
        add(r3);
        add(r2);






        
    }
    public void actionPerformed(ActionEvent e)
    {
            if (e.getSource()==r1)
            {
                b1.setBackground(Color.RED);
            }
            else if (e.getSource()==r2)
            {
                b1.setBackground(Color.YELLOW);
            }
            else if (e.getSource()==r3)
            {
                b1.setBackground(Color.GREEN);
            }
    }
    public static void main(String[] args) {
        new traffic();
    }
    
}
