ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M

ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M

ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;
import java.util.Stack;
import java.util.ArrayList;

public class calculator extends JFrame{	//JFrame
	JTextField tf;
	JButton[] bt;
	calculator(){
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		this.setTitle("Calculator");
		this.setSize(300,230);
		this.setLayout(new FlowLayout(o/_
))		 af = new JTextField(24);	//TextField
		JPanel p1 = new JPanel();	//bt
		p1.setLayout(new GridLayout(5,4));
		
		bt = new JButton[20];
		bt[0] = new JButton("2->10");	bt[1] = new JButton("10->2");	bt[2] = new JButton("/");	bt[3] = new JButton("*");
		bt[4] = new JButton("7");	bt[5] = new JButton("8");	bt[6] = new JButton("9");	bt[7] = new JButton("-");
		bt[8] = new JButton("4");	bt[9] = new JButton("5");	bt[10] = new JButton("6");	bt[11] = new JButton("+");
		bt[12] = new JButton("1");	bt[13] = new JButton("2");	bt[14] = new JButton("3");	bt[15] = new JButton("=");
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
ublic class calculator extends JFrame{ //JFrame^M
  9         JTextField tf;^M
 10         JButton[] bt;^M
 11         calculator(){^M
 12                 this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);^M
 13                 this.setTitle("Calculator");^M
 14                 this.setSize(300,230);^M
 15                 this.setLayout(new FlowLayout(o/_
 16 ))               af = new JTextField(24);       //TextField^M
 17                 JPanel p1 = new JPanel();       //bt^M
 18                 p1.setLayout(new GridLayout(5,4));^M
 19                 ^M
 20                 bt = new JButton[20];^M
 21                 bt[0] = new JButton("2->10");   bt[1] = new JButton("10->2");   bt[2] = new JButton("/");       bt[3] = new JButton("*");^M
 22                 bt[4] = new JButton("7");       bt[5] = new JButton("8");       bt[6] = new JButton("9");       bt[7] = new JButton("-");^M
 23                 bt[8] = new JButton("4");       bt[9] = new JButton("5");       bt[10] = new JButton("6");      bt[11] = new JButton("+");^M
 24                 bt[12] = new JButton("1");      bt[13] = new JButton("2");      bt[14] = new JButton("3");      bt[15] = new JButton("=");^M
 25                 bt[16] = new JButton("(");      bt[17] = new JButton("0");      bt[18] = new JButton(")");      bt[19] = new JButton("C");^M
 26                 ^M
 27                 for(int i=2;i<19;i++) {^M
 28                         if(i==15)^M
 29                                 continue;^M
 30                         bt[i].addActionListener(new btActionListener());^M
 31                 }^M
 32                 bt[0].addActionListener(new bt2ActionListener());^M
 33                 bt[1].addActionListener(new bt2ActionListener(im{=(
 34 (tt
 35 
 36 i       ]snaddActionListener(new bt3ActionListener());^M
 37                 bt[19].addActionListener(new bt4ActionListener());^M
 38                 for(int i=0;i<20;i++)^M
 39                         p1.add(bt[i]);^M
 40                 ^M
 41                 this.add(tf);^M
 42                 this.add(p1);^M
 43                 this.add(new JLabel("Kang Dong Geun"im{=(
 44 a(                       ttResizable(false);^M
 45                 setVisible(true);^M
 46         }^M
VV		bt[16] = new JButton("(");	bt[17] = new JButton("0");	bt[18] = new JButton(")");	bt[19] = new JButton("C");
		
		for(int i=2;i<19;i++) {
			if(i==15)
				continue;
			bt[i].addActionListener(new btActionListener());
		}
		bt[0].addActionListener(new bt2ActionListener());
		bt[1].addActionListener(new bt2ActionListener(im{=(
(tt	

i	]snaddActionListener(new bt3ActionListener());
		bt[19].addActionListener(new bt4ActionListener());
		for(int i=0;i<20;i++)
			p1.add(bt[i]);
		
		this.add(tf);
		this.add(p1);
		this.add(new JLabel("Kang Dong Geun"im{=(
a(			 ttResizable(false);
		setVisible(true);
	}
	public class btActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			tf.setText(""+tf.getText()+button.getText());
		}
	}
	public class bt2ActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			if(button.getText().equals("2->10phuo({""iu(w(e;
	;o-) cef.getText();
				tf.setText(""+calc(temp));
			}else{
				int temp = Integer.parseInt(tf.getText());
				tf.setText(""+calc2(tempo/_
)pkct")eec nct"h(in.ofkswho)e;").J"(pionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			tf.setText(sup_calc(tf.getText(oS5	2	axt) o
	public class bt4ActionListener implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton button = (JButton)e.getSource();
			tf.setText("");
		}
	}
	public static class Mypair{		//class pair!!
		private String num;
		private int key;
		Mypair(String S,int k){
			num = S;
			key = k;
		}
		Mypair(){
			num = "";
			key = 0;
		}
		public String get_num() {
			return num;
		}
		public int get_key() {
			return key;
		}
	txlTo{"ic static int[] check_cnt(String S) {		//f_return_cnt_arr
		int cnt=1;
		for(int i=0;i<S.length();i++)
			if(S.charAt(i)=='+'||S.charAt(i)=='-'||S.charAt(i)=='*'||S.charAt(i)=='/')
				cnt++;
		int[] arr = new int[cnt];
			
		int j=0;
		int cnt2=0;
		
		for(int i=0;i<S.length();i++) {
			if(S.charAt(0)=='-') {
				cnt2++;
				continue;
			}
			if(S.charAt(i)=='('||S.charAt(i)==')')
				continue;
			
			else if(S.charAt(i)=='+'||S.charAt(i)=='-'||S.charAt(i)=='*'||S.charAt(i)=='/') {
				if(cnt2!=0) {
					arr[j++]=cnt2;
					cnt2=0;
				txttos	tt[nh .its		;()				oy t
				cnt2++;
		}
		arr[j++]=cnt2;
		
		return arr;
	}
	
	int calc(String s){
		int temp=0;
		for(int i=0;i<s.length();i++){
			if(i==0)
				temp+=s.charAt(i)-'0';
			else
				temp=temp*2+(s.charAt(i)-'0');
		}
		
		return temp;
	}
	String calc2(int n){
		String s = new String("");
		for(int i=0;;i++){
			if(n==1){
				s = s.concat("1");
				break;
			}
			else{
				if(n%2==0){
					s = s.concat("0");
					n=n/2;
				txttp=l;iy	c					s = s.concat("1");
					n = (n-1)/2;
				}
			}
		}
		String temp = new String("");
		boolean check = false;
		for(int i=s.length()-1;i>=0;i--){
			if(s.charAt(i)=='1')
				check = true;
			if(check==true)
				if(s.charAt(i)=='1')
					temp = temp.concat("1");
				else
					temp = temp.concat("0");
		}
		
		return temp;
	txut< 
)i	kc static String calc_frml(String S){	//postfix notation
		Stack<String> mystack = new Stack<String>();
		String result = new String();
		result = "";
		
		//ArrayList<String> result = new ArrayList<String>();
		
		for(int i=0;i<S.length();i++){		//check '('
			if(S.charAt(i)=='('){
				mystack.push("(");
			txttil8 b)m{0 (l)lpaq(mmwL'||S.charAt(i)=='/'){		//check '*','/'
				if(S.charAt(i)=='*'){
					if(mystack.isEmpty())
						mystack.push("*");
					else if(mystack.peek()=="*"||mystack.peek()=="/") {
						while(!(mystack.isEmpty(o	")&(mystack.peek()=="*"||mystack.peek()=="/ph;	+							,sult = result.concat(mystack.pop());
						mystack.push("*");
					}
					else
						mystack.push("*");
				}
				else{
					if(mystack.isEmpty())
						mystack.push("/");
					else if(mystack.peek()=="*"||mystack.peek()=="/") {
						while(!(mystack.isEmpty())&B-	uut ..peek()=="*"||mystack.peek()=="/"il_t
)"icr(=n"
)yresult.concat(mystack.pop());
						mystack.push("/");
					txtt
)_"ow.(						=+stack.push("/");
				}
			}
			else if(S.charAt(i)=='+'||S.charAt(i)=='-'){		//check '+','-'
				if(S.charAt(i)=='+'){
					if(mystack.isEmpty(imr40			mystack.push("+");
					}
					else{
						if(mystack.peek()=="*"||mystack.peek()=="/"){
							while(!(mystack.isEmpty())&&(mystack.peek()=="*"||mystack.peek()=="/")){
									result = result.concat(mystack.pop());
							}
							mystack.push("+");
						}
						else if(mystack.peek()=="+"||mystack.peek()=="-"){
							while(!(mystack.isEmpty())&&(mystack.peek()=="+"||mystack.peek()=="-"oeO;"({<	(
"ec(s
	(tsult.concat(mystack.pop());
							mystack.push("+");
						}
						else
							mystack.push("+");
					}
				}
				else{
					if(mystack.isEmpty()){
						mystack.push("-");
					txtt
)_"owe)t(						nf(mystack.peek()=="*"||mystack.peek()=="/"){
							while(!(mystack.isEmpty(o	")&(mystack.peek()=="*"||mystack.peek()=="/phuo({""({{{2)
mi"
)yresult.concat(mystack.pop());
							txtt
)"
	i]n=ocL+	
)=
=tnat8"					tec						else if(mystack.peek()=="+"||mystack.peek()=="-"){
							while(!(mystack.isEmpty(o	")&(mystack.peek()=="+"||mystack.peek()=="-ph;	+								,sult = result.concat(mystack.pop());
							mystack.push("-");
						}
						else
							mystack.push("-");
					}
				}
			}
		
			else if(S.charAt(i)==')'){
				while(mystack.peek()!="(")
					result = result.concat(mystack.pop());
				mystack.pop();
			}
			else{
				result = result.concat(Character.toString(S.charAt(i)im{=(
	)()		r)f		while(!mystack.isEmpty()){
			result = result.concat(mystack.pop());
		}
		System.out.println(result);	//debug
		return result;
	}
	public static ArrayList<Mypair> creat_list(String S,int[] arr){
		ArrayList<Mypair> result = new ArrayList<Mypair>();
		
		int k=0;
		for(int i=0;i<S.length();i++) {
			if(S.charAt(i)=='+'||S.charAt(i)=='-'||S.charAt(i)=='*'||S.charAt(i)=='/')	//operator
				result.add(new Mypair(Character.toString(S.charAt(i)),wh;
	;o	tar/		g((sp nii)u"
oktnc)a	{ up	)
)+y ( m"e	Ju)toi)f)
				temp = "";
				for(int j=0;j<arr[k];j++) {
					temp = temp.concat(Character.toString(S.charAt(i+j(h;
	;o	)()				.+=arr[k]-1;
				result.add(new Mypair(temp,0));
				k++;
			}
		txtB
)E]"
t)ihz 
	  ctxlTo{"ic static String main_calc(ArrayList<Mypair> L) {
		String S = new String();
		Stack<Double> mystack = new Stack<Double>();
		double calc_temp1,calc_temp2;
		
		for(int i=0;i<L.size();i++) {
			if(L.get(i).get_key()==0) {		//if L is num
				mystack.push(Double.parseDouble(L.get(i).get_num()t	u .'_ApLtoie
	kitaekn stack
			}
			else{
				if(L.get(i).get_num().equals("+")) {		// "+"
					calc_temp2 = mystack.pop();
					calc_temp1 = mystack.pop();
					mystack.push(calc_temp1+calc_temp2);
				}
				else if(L.get(i).get_num().equals("-")) {		// "-"
					calc_temp2 = mystack.pop();
					calc_temp1 = mystack.pop();
					mystack.push(calc_temp1-calc_temp2);
				txttp=lc	
.f(L.get(i).get_num().equals("*"(_c		(hse]" 	
0				;rtpttir=i	SodB(	cuu|"coc
)
					calc_temp1 = mystack.pop();
					mystack.push(calc_temp1*calc_temp2);
				}
				else {		// "/"
					calc_temp2 = mystack.pop();
					calc_temp1 = mystack.pop();
					mystack.push(calc_temp1/calc_temp2);
				}
			}
		txcbu	f(o
p(tw"tnlou)toi)=+stack.pop());
		
		return S;
	}
	public static String reform_S(String S){
		int op_cnt = 0;
		int op_next = 0;
		
		for(int i=0;i<S.length();i++){
			if(S.charAt(i)=='-'&&op_next>0){
				int[] arr_cnt = check_cnt(S);
				String s1 = "";
				String s2 = "";
				String s3 = "";
				s1 = S.substring(0,i);
				s2 = S.substring(i,i+1+arr_cnt[op_cnt]);
				s3 = S.substring(i+1+arr_cnt[op_cnt],S.length(im{=(
	a(				nf(i+1+arr_cnt[op_cnt]==S.length(oa(yc		.uc
s&_a	

)"(+ mn"	,ilc {tt.iy( cnf!");
				}
				

				S = "";
				s1 = s1.concat("(0");
				s2 = s2.concat(ph;phi"p;[	l	diconcat(s1);
