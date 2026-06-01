import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Moneyhanger extends JFrame {
    private JTextField inputField;
    private JLabel resultLabel;

    public MoneyChanger() {
        setTitle("Money Changer");
        setSize(400, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new FlowLayout(FlowLayout.LEFT, 20, 20));

        add(new JLabel("Input $"));

        inputField = new JTextField(5);
        add(inputField);

        resultLabel = new JLabel("Tk 0");
        add(resultLabel);

        JButton convertBtn = new JButton("Convert");
        convertBtn.addActionListener(e -> {
            try {
                double dollars = Double.parseDouble(inputField.getText());
                double taka = dollars * 110; // 1 USD = 110 BDT (update as needed)
                resultLabel.setText("Tk " + (int) taka);
            } catch (NumberFormatException ex) {
                resultLabel.setText("Invalid input!");
            }
        });

        add(convertBtn);
        setVisible(true);
    }

    public static void main(String[] args) {
        new MoneyChanger();
    }
}