... imports...


class Javafx2 extends Application
{
  public void start(Stage s) throws Exception
  {
    Label l1 = new Label();
    Label l2 = new Label();
    
    HBox h1 = new HBox();
    h1.getChildren().addAll(l1, l2);
    
    Scene scene = new Scene(h1, 300, 400);
    
    s.setScene(scene);
    s.show();
    
    scene.setOnMouseEntered(e -> l1.setText("In"));
    scene.setOnMouseExited(e -> l1.setText("Out"));
    
    scene.setOnMouseMoved(e ->
      {
      String coord = "x: "+e.getX()+" y: "+e.getY();
      l2.setText(coord);
      }
      )
    }
    public static void main(String[] args)
    {
      launch(args);
    }
  }
