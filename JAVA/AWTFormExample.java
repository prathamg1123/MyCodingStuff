import java.awt.*;
import java.awt.event.*;

class AWTFormExample extends Frame implements ActionListener {
    TextField txtName;
    Checkbox cbJava, cbPython;
    CheckboxGroup genderGroup;
    Checkbox rbMale, rbFemale;
    List courseList;
    Button submitBtn;
    Label result;

    AWTFormExample() {
        // Frame settings
        setTitle("AWT Form Example");
        setSize(400, 400);
        setLayout(null);
        // Label and TextBox
        Label nameLabel = new Label("Name:");
        nameLabel.setBounds(50, 50, 80, 20);
        add(nameLabel);
        txtName = new TextField();
        txtName.setBounds(150, 50, 150, 20);
        add(txtName);
        // Check Boxes
        Label skillLabel = new Label("Skills:");
        skillLabel.setBounds(50, 90, 80, 20);
        add(skillLabel);
        cbJava = new Checkbox("Java");
        cbJava.setBounds(150, 90, 60, 20);
        add(cbJava);
        cbPython = new Checkbox("Python");
        cbPython.setBounds(220, 90, 80, 20);
        add(cbPython);
        // Radio Buttons
        Label genderLabel = new Label("Gender:");
        genderLabel.setBounds(50, 130, 80, 20);
        add(genderLabel);
        genderGroup = new CheckboxGroup();
        rbMale = new Checkbox("Male", genderGroup, false);
        rbMale.setBounds(150, 130, 60, 20);
        add(rbMale);
        rbFemale = new Checkbox("Female", genderGroup, false);
        rbFemale.setBounds(220, 130, 70, 20);
        add(rbFemale);
        // List
        Label courseLabel = new Label("Course:");
        courseLabel.setBounds(50, 170, 80, 20);
        add(courseLabel);
        courseList = new List();
        courseList.setBounds(150, 170, 150, 60);
        courseList.add("B.Tech");
        courseList.add("M.Tech");
        courseList.add("MBA");
        courseList.add("MCA");
        add(courseList);
        // Submit Button
        submitBtn = new Button("Submit");
        submitBtn.setBounds(150, 250, 80, 30);
        submitBtn.addActionListener(this);
        add(submitBtn);
        // Result Label
        result = new Label();
        result.setBounds(50, 300, 300, 30);
        add(result);
        // Close window
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                dispose();
            }
        });
        setVisible(true);
    }

    // Button Action
    public void actionPerformed(ActionEvent e) {
        String name = txtName.getText();
        String gender = genderGroup.getSelectedCheckbox().getLabel();
        String course = courseList.getSelectedItem();
        result.setText("Name: " + name + ", Gender: " + gender + ", Course: " + course);
    }

    public static void main(String[] args) {
        new AWTFormExample();
    }
}