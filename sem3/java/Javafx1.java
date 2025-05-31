import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;
import javafx.scene.layout.HBox;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class Javafx1 extends Application {
    public void start(Stage s) {
        Button up = new Button("Upper");
        Button low = new Button("Lower");
        TextField t1 = new TextField();

        HBox h1 = new HBox();
        h1.getChildren().addAll(up, low, t1);

        Scene scene = new Scene(h1, 300, 100);
        s.setScene(scene);
        s.show();

        up.setOnAction(e -> t1.setText(t1.getText().toUpperCase()));
        low.setOnAction(e -> t1.setText(t1.getText().toLowerCase()));
    }

    public static void main(String[] args) {
        launch(args);
    }
}

