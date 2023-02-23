package Swing;
import javax.swing.*;
import java.awt.event.*;


public class calc extends JFrame implements ActionListener {
    JLabel l1, l2, l3;
    JButton b1, b2, b3, b4, b5;
    JTextField t1, t2, t3;

    calc() {
        setTitle("Calculator");
        setSize(400, 250);
        //setLocationRelativeTo(null);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create and add the labels
        l1 = new JLabel("First Number:");
        l2 = new JLabel("Second Number:");
        l3 = new JLabel("Result:");
        l1.setBounds(20, 20, 100, 25);
        l2.setBounds(20, 60, 100, 25);
        l3.setBounds(20, 100, 100, 25);
        add(l1);
        add(l2);
        add(l3);

        // Create and add the text fields
        t1 = new JTextField();
        t2 = new JTextField();
        t3 = new JTextField();
        t1.setBounds(130, 20, 200, 25);
        t2.setBounds(130, 60, 200, 25);
        t3.setBounds(130, 100, 200, 25);
        add(t1);
        add(t2);
        add(t3);
        t3.setEditable(false);

        // Create and add the buttons
        b1 = new JButton("+");
        b2 = new JButton("-");
        b3 = new JButton("*");
        b4 = new JButton("/");
        b5 = new JButton("Clear");
        b1.setBounds(50, 150, 50, 30);
        b2.setBounds(110, 150, 50, 30);
        b3.setBounds(170, 150, 50, 30);
        b4.setBounds(230, 150, 50, 30);
        b5.setBounds(290, 150, 70, 30);
        add(b1);
        add(b2);
        add(b3);
        add(b4);
        add(b5);

        // Add action listeners for the buttons
        b1.addActionListener(this);
        b2.addActionListener(this);
        b3.addActionListener(this);
        b4.addActionListener(this);
        b5.addActionListener(this);

        // Set the layout
        setLayout(null);

        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)

    {   
        int y=Integer.parseInt(t1.getText());
        int z=Integer.parseInt(t2.getText());
        if (e.getSource()==b1)
        {

            t3.setText(String.valueOf(y+z));
        }
        else if (e.getSource()==b2)
        {

            t3.setText(String.valueOf(y-z));
        }
        else if (e.getSource()==b3)
        {

            t3.setText(String.valueOf(y/z));
        }
        else if (e.getSource()==b4)
        {

            t3.setText(String.valueOf(y*z));
        }else
        
        {
            t3.setText("");
            t2.setText("");
            t1.setText("");
        }

    }
    

    public static void main(String[] args) {
        new calc();
    }

    
    
}
