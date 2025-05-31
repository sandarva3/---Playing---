... imports ...



public class Javafx3 extends Application
{
  public void start(Stage s) throws Exception
  {
    Button red = new Button("Red");
    Button green = new Button("Green");
    
    HBox h1 = new HBox();
    h1.getChildren().addAll(red, green);
    
    Scene scene = new Scene(h1, 300, 400);
    
    s.setScene(scene);
    s.show();
    
    red.setOnAction(e -> {
      BackgroundFill bgf = new BackgroundFill(Color.RED, CorderRadii.EMPTY, Insets.EMPTY);
      Background bg = new Background(bgf);
      green.setBackground(bg);
      }
    )
    
    green.setOnAction( e -> {
      BackgroundFill bdf = new BackgroundFill(Color.GREEN, CornerRadii.EMPTY, Insets.EMPTY);
      Background bg = new Background(bdf);
      red.setBackground(bg);
      }
    )
  }
  
  public static void main(String[] args)
  {
    launch(args);
  }
}
