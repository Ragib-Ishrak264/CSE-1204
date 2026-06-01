import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class BasicCalculator extends JFrame implements ActionListener {

    JTextField display;
    JButton[] numberButtons = new JButton[10];
    JButton addButton, subButton, mulButton, divButton, eqButton, clrButton;
    JPanel panel;

    double num1 = 0, num2 = 0, result = 0;
    String operator = "";

    public BasicCalculator() {
        setTitle("Basic Calculator");
        setSize(300, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        display = new JTextField();
        display.setFont(new Font("Arial", Font.PLAIN, 24));
        display.setEditable(false);
        display.setHorizontalAlignment(JTextField.RIGHT);
        add(display, BorderLayout.NORTH);

        panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4, 5, 5));

        for (int i = 0; i < 10; i++) {
            numberButtons[i] = new JButton(String.valueOf(i));
            numberButtons[i].setFont(new Font("Arial", Font.PLAIN, 20));
            numberButtons[i].addActionListener(this);
        }

        addButton = new JButton("+");
        subButton = new JButton("-");
        mulButton = new JButton("*");
        divButton = new JButton("/");
        eqButton = new JButton("=");
        clrButton = new JButton("C");

        JButton[] functionButtons = {
            addButton, subButton, mulButton, divButton, eqButton, clrButton
        };

        for (JButton button : functionButtons) {
            button.setFont(new Font("Arial", Font.PLAIN, 20));
            button.addActionListener(this);
        }

        panel.add(numberButtons[7]);
        panel.add(numberButtons[8]);
        panel.add(numberButtons[9]);
        panel.add(divButton);

        panel.add(numberButtons[4]);
        panel.add(numberButtons[5]);
        panel.add(numberButtons[6]);
        panel.add(mulButton);

        panel.add(numberButtons[1]);
        panel.add(numberButtons[2]);
        panel.add(numberButtons[3]);
        panel.add(subButton);

        panel.add(numberButtons[0]);
        panel.add(clrButton);
        panel.add(eqButton);
        panel.add(addButton);

        add(panel, BorderLayout.CENTER);

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        for (int i = 0; i < 10; i++) {
            if (e.getSource() == numberButtons[i]) {
                display.setText(display.getText().concat(String.valueOf(i)));
            }
        }

        if (e.getSource() == addButton) {
            num1 = Double.parseDouble(display.getText());
            operator = "+";
            display.setText("");
        }

        if (e.getSource() == subButton) {
            num1 = Double.parseDouble(display.getText());
            operator = "-";
            display.setText("");
        }

        if (e.getSource() == mulButton) {
            num1 = Double.parseDouble(display.getText());
            operator = "*";
            display.setText("");
        }

        if (e.getSource() == divButton) {
            num1 = Double.parseDouble(display.getText());
            operator = "/";
            display.setText("");
        }

        if (e.getSource() == eqButton) {
            num2 = Double.parseDouble(display.getText());

            switch (operator) {
                case "+":
                    result = num1 + num2;
                    break;
                case "-":
                    result = num1 - num2;
                    break;
                case "*":
                    result = num1 * num2;
                    break;
                case "/":
                    if (num2 != 0) {
                        result = num1 / num2;
                    } else {
                        display.setText("Error");
                        return;
                    }
                    break;
            }

            display.setText(String.valueOf(result));
        }

        if (e.getSource() == clrButton) {
            display.setText("");
            num1 = 0;
            num2 = 0;
            result = 0;
            operator = "";
        }
    }

    public static void main(String[] args) {
        new BasicCalculator();
    }
}