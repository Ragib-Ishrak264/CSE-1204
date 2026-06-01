import javax.swing.*;
import java.awt.FlowLayout;
import java.awt.BorderLayout;

public class First {
    JFrame frame;
    private JTextField inputfField;
    private JLabel resultLabel;
    First()
    {
        frame = new JFrame("first way");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400,200);
        
        frame.setLocationRelativeTo(null);
       frame.setLayout(new FlowLayout(FlowLayout.LEFT, 20, 20));
        frame.add(new JLabel("Input $"));
        inputfField = new JTextField(5);
        frame.add(inputfField);

        resultLabel = new JLabel("Tk 0");
        frame.add(resultLabel);
        JButton convertBtn = new JButton("Convert");
        convertBtn.addActionListener(e -> {
            try{
                double dollars = Double.parseDouble(inputfField.getText());
                double taka = dollars*110;
                resultLabel.setText("Tk "+(int) taka);
            }
            catch(NumberFormatException ex)
            {
                resultLabel.setText("Invalid Input");

            }
        });
        frame.add(convertBtn);
        frame.setVisible(true);


    }
        public static void main(String[] args)
        {
            new First();

        }
    }

    

