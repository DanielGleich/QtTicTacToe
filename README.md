2. Schuljahr (Ausbildung als staatlich geprüfter informationstechnischer Assistent) (Freizeit PMC)

Das 2.Schuljahr neigte sich zum Ende und wir hatten noch immer nicht mit Fenster-Anwendungen angefangen;
daher habe ich mich bei der damaligen Oberstufe ein wenig informiert und angefangen zu experementieren.
Dieser Quellcode ist größtenteils vom Programm generiert, da mir das Wissen fehlte und ich den Designer
benutzt habe. Es ist ein einfaches TicTacToe-Spiel, jedoch war mein Wissensstand nicht so weit, dass eine
funktionierende Gewinnabfrage besteht. 

Klasse Player
Spieler besitzt nur ein Symbol, was im Spielfeld sichtbar ist (X/O)

Klasse Game
players 								==> Array bestehend aus zwei Player-Objekten
turn 									==> gibt an, welcher Spieler dran ist (0 = Spieler 1 | 1 = Spieler 2)

fields 									==> Array, wo die gespielten Symbole eingespeichert sind. (Überflüssig, da man die Symbole aus den PushButtons auslesen könnte)
switchTurn()							==>	Funktion, um den Schriftzug "Spieler 1/Spieler 2" zu ändern
getPlayer(int ...) 						==> Returnt Player-Klassenobjekt der angegebenen Nummer
Is[...]Won()							==> Returnt, ob Reihe/Spalte/Diagonale zu einem Sieg führt bzw. ob das Spiel gewonnen ist
executeTurn(QPushButton, QLabel, int)	==> Setzt das Zeichen des aktiven Spielers in den geklickten PushButton
play()									==> Initialisiert das Spiel. Leert die Spielfelder und setzt die Symbole der Spieler

Klasse mainwindow
Diese Klasse enthält die ganze Grafikoberfläche des Programms

on_[...]_clicked() 						==> Click-Events von allen PushButtons