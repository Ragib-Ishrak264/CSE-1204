public class LoginForm {
    public static void main(String[] args) {
        javax.swing.JFrame frame = new javax.swing.JFrame("Login Form");
        frame.setSize(360, 250);
        frame.setDefaultCloseOperation(javax.swing.JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);

        javax.swing.JLabel titleLabel = new javax.swing.JLabel("Login Form");
        titleLabel.setBounds(30, 10, 100, 25);
        frame.add(titleLabel);

        javax.swing.JLabel userLabel = new javax.swing.JLabel("Username");
        userLabel.setBounds(40, 60, 80, 25);
        frame.add(userLabel);

        javax.swing.JTextField userField = new javax.swing.JTextField();
        userField.setBounds(130, 60, 140, 25);
        frame.add(userField);

        javax.swing.JLabel passLabel = new javax.swing.JLabel("Password");
        passLabel.setBounds(40, 100, 80, 25);
        frame.add(passLabel);

        javax.swing.JPasswordField passField = new javax.swing.JPasswordField();
        passField.setBounds(130, 100, 140, 25);
        frame.add(passField);

        javax.swing.JButton submitButton = new javax.swing.JButton("Submit");
        submitButton.setBounds(120, 145, 90, 35);
        frame.add(submitButton);

        javax.swing.JLabel resultLabel = new javax.swing.JLabel("");
        resultLabel.setBounds(120, 185, 120, 25);
        frame.add(resultLabel);

        submitButton.addActionListener(e -> {
            String username = userField.getText();
            String password = new String(passField.getPassword());

            if (username.equals("admin") && password.equals("1234")) {
                resultLabel.setText("Valid User");
            } else {
                resultLabel.setText("Invalid User");
            }
        });

        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }
}