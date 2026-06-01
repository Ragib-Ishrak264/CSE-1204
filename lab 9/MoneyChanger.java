public class MoneyChanger {
    public static void main(String[] args) {
        javax.swing.JFrame frame = new javax.swing.JFrame("Money Changer");
        frame.setSize(350, 220);
        frame.setDefaultCloseOperation(javax.swing.JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);

        javax.swing.JLabel inputLabel = new javax.swing.JLabel("Input $");
        inputLabel.setBounds(60, 40, 80, 25);
        frame.add(inputLabel);

        javax.swing.JTextField dollarField = new javax.swing.JTextField();
        dollarField.setBounds(60, 70, 80, 30);
        frame.add(dollarField);

        javax.swing.JLabel resultLabel = new javax.swing.JLabel("Tk 0");
        resultLabel.setBounds(200, 75, 100, 25);
        frame.add(resultLabel);

        javax.swing.JButton convertButton = new javax.swing.JButton("Convert");
        convertButton.setBounds(120, 130, 100, 35);
        frame.add(convertButton);

        convertButton.addActionListener(e -> {
            try {
                double dollar = Double.parseDouble(dollarField.getText());
                double taka = dollar * 110;   // 1 Dollar = 110 Taka
                resultLabel.setText("Tk " + (int)taka);
            } catch (NumberFormatException ex) {
                resultLabel.setText("Invalid Input");
            }
        });

        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}