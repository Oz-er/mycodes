import javax.swing.*;
import java.awt.event.*;
import java.awt.*;
import java.io.File;


public class RegistrationForm {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Registration Form");
        frame.getContentPane().setPreferredSize(new Dimension(600, 700));
        frame.pack(); // Adjusts the outer frame to fit the content
        frame.setLayout(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);


        JLabel nameLabel = new JLabel("Name:");
        nameLabel.setBounds(40, 40, 100, 30);
        frame.add(nameLabel);
        JTextField nameField = new JTextField();
        nameField.setBounds(160, 40, 250, 30);
        frame.add(nameField);

        JLabel emailLabel = new JLabel("Email:");
        emailLabel.setBounds(40, 80, 100, 30);
        frame.add(emailLabel);
        JTextField emailField = new JTextField();
        emailField.setBounds(160, 80, 250, 30);
        frame.add(emailField);

        JLabel phoneLabel = new JLabel("Phone:");
        phoneLabel.setBounds(40, 120, 100, 30);
        frame.add(phoneLabel);
        JTextField phoneField = new JTextField();
        phoneField.setBounds(160, 120, 250, 30);
        frame.add(phoneField);


        JLabel addressLabel = new JLabel("Name:");
        addressLabel.setBounds(40, 160, 100, 30);
        frame.add(addressLabel);
        JTextField addressField = new JTextField();
        addressField.setBounds(160, 160, 250, 30);
        frame.add(addressField);


        JLabel genderLabel = new JLabel("Gender:");
        genderLabel.setBounds(40, 200, 100, 30);
        frame.add(genderLabel);
        JRadioButton male = new JRadioButton("Male");
        male.setBounds(160, 200, 70, 25);
        frame.add(male);
        JRadioButton female = new JRadioButton("Female");
        female.setBounds(240, 200, 70, 25);
        frame.add(female);
        ButtonGroup genderGroup = new ButtonGroup();
        genderGroup.add(male);
        genderGroup.add(female);
        frame.add(genderLabel);
        frame.add(male);
        frame.add(female);


        //comboboxes

        JLabel doLabel = new JLabel("Date of Birth:");
        doLabel.setBounds(40, 240, 100, 25);
        String[] days = new String[31];
        for (int i = 1; i <= 31; i++) {
            days[i - 1] = String.valueOf(i);
        }
        String[] months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        String[] years = new String[100];
        for (int i = 0; i < 100; i++) years[i] = String.valueOf(2025 - i);
        JComboBox<String> dayBox = new JComboBox<>(days);
        dayBox.setBounds(160, 240, 50, 25);
        JComboBox<String> monthBox = new JComboBox<>(months);
        monthBox.setBounds(220, 240, 60, 25);
        JComboBox<String> yearBox = new JComboBox<>(years);
        yearBox.setBounds(290, 240, 70, 25);
        frame.add(doLabel);
        frame.add(dayBox);
        frame.add(monthBox);
        frame.add(yearBox);


        // Degree
        JLabel degreeLabel = new JLabel("Degree:");
        degreeLabel.setBounds(40, 280, 100, 30);
        String[] degrees = {"BSSE", "MSSE"};
        JComboBox<String> degreeBox = new JComboBox<>(degrees);
        degreeBox.setBounds(160, 280, 70, 30);
        frame.add(degreeLabel);
        frame.add(degreeBox);

        // Preferred Position
        JLabel posLabel = new JLabel("Position:");
        posLabel.setBounds(40, 320, 150, 30);
        JRadioButton gk = new JRadioButton("GK");
        gk.setBounds(160, 320, 60, 25);
        JRadioButton df = new JRadioButton("DEF");
        df.setBounds(230, 320, 60, 25);
        JRadioButton mf = new JRadioButton("MID");
        mf.setBounds(300, 320, 60, 25);
        JRadioButton fw = new JRadioButton("ATK");
        fw.setBounds(370, 320, 60, 25);
        ButtonGroup posGroup = new ButtonGroup();
        posGroup.add(gk);
        posGroup.add(df);
        posGroup.add(mf);
        posGroup.add(fw);
        frame.add(posLabel);
        frame.add(gk);
        frame.add(df);
        frame.add(mf);
        frame.add(fw);


        // Inter-departmental
        JLabel interLabel = new JLabel("Played Inter-dept?");
        interLabel.setBounds(40, 360, 150, 30);
        JRadioButton yes = new JRadioButton("Yes");
        yes.setBounds(160, 360, 70, 25);
        JRadioButton no = new JRadioButton("No");
        no.setBounds(230, 360, 70, 25);
        ButtonGroup interGroup = new ButtonGroup();
        interGroup.add(yes);
        interGroup.add(no);
        frame.add(interLabel);
        frame.add(yes);
        frame.add(no);


        // Football experience
        JLabel expLabel = new JLabel("Prev Exp:");
        expLabel.setBounds(40, 400, 150, 30);
        JTextField expField = new JTextField();
        expField.setBounds(160, 400, 250, 30);
        frame.add(expLabel);
        frame.add(expField);


        //FileName

        JLabel fileLabel1 = new JLabel("Profile Photo:");
        fileLabel1.setBounds(40, 440, 100, 25);
        frame.add(fileLabel1);

        JButton fileButton = new JButton("Choose File");
        fileButton.setBounds(160, 440, 150, 20);

        JLabel filePathLabel = new JLabel();
        filePathLabel.setBounds(320, 440, 150, 25);


        frame.add(fileLabel1);
        frame.add(fileButton);
        frame.add(filePathLabel);


        final String[] selectedFilePath = {""};
        fileButton.addActionListener(e->{
            JFileChooser fileChooser = new JFileChooser();
            int option = fileChooser.showOpenDialog(frame);
            if(option == JFileChooser.APPROVE_OPTION){
                File file = fileChooser.getSelectedFile();
                selectedFilePath[0]=file.getAbsolutePath();
                filePathLabel.setText(file.getName());
            }
        });


        JButton registerButton = new JButton("Register");
        registerButton.setBounds(230,480,100,25);
        frame.add(registerButton);


        registerButton.addActionListener(e->{
            String name = nameField.getText();
            String email = emailField.getText();
            String phone = new String(phoneField.getText());
            String address= addressField.getText();
            String gender = male.isSelected() ? "Male" : (female.isSelected() ? "Female" : "Not selected");
            String dob = dayBox.getSelectedItem() + "-" + monthBox.getSelectedItem() + "-" + yearBox.getSelectedItem();
            String degree =(String)degreeBox.getSelectedItem();
            String position = gk.isSelected() ? "GK" : (df.isSelected() ? "DEF" : (mf.isSelected() ? "MID" : (fw.isSelected() ? "ATK" : "Not selected")));
            String inter =  yes.isSelected() ? "yes" : (no.isSelected() ?  "no" : "Not selected");
            String experience = expField.getText().trim();
            String photo = selectedFilePath[0].isEmpty() ? "Not uploaded" : selectedFilePath[0];


            if(name.isEmpty()||email.isEmpty()||phone.isEmpty()||address.isEmpty()||experience.isEmpty()){
                JOptionPane.showMessageDialog(frame, "Please fill in all required fields (Name, Email, Phone, Address).", "Error", JOptionPane.ERROR_MESSAGE);
                return;
            }
        });


















        frame.setVisible(true);


    }
}
