import 'package:flutter/material.dart';

void main() {
  runApp(MaterialApp(
    home: HomeScreen(),
  ));
}

class HomeScreen extends StatelessWidget{
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('Layout tutorial'),
      ),
      body: ListView(
        children: <Widget>[
          _buildImageSection(),
          _buildTitleSection(),
          _buildButtonSection(),
          _buildTextSection(),

        ],
     ),
    );
}

  _buildImageSection () {
  return Image.network('https://www.e-oki.net/img_data/SP24_1.jpg?20190116140928');
  }

  _buildTitleSection () {
    return Container(
      margin: EdgeInsets.all(24),
      child: Row(
      mainAxisAlignment: MainAxisAlignment.spaceBetween,
      children: <Widget>[
        Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: <Widget>[
            Text('那久岬', style: TextStyle(
              fontWeight: FontWeight.bold,
              fontSize: 24
              ),
            ),
            Text('隠岐郡隠岐の島町那久, 島根県', style: TextStyle(
              color: Colors.grey[500]
              ),
            ),
            ],
        ),

            Row(
              children: <Widget>[
                Icon(Icons.favorite, color:Colors.red,),
                Text('0')
              ],

            )


        ],
      ),
    );
  }
  _buildButtonSection () {
    return Container(
      margin: EdgeInsets.all(16),
       child: Row(
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: <Widget>[

          _buildButtonItem(Icons.call, Colors.blue, 'CALL'),
          _buildButtonItem(Icons.near_me, Colors.blue, 'ROUTE'),
          _buildButtonItem(Icons.share, Colors.blue, 'SHARE'),

            ],
          ),
        );
  }

  _buildButtonItem(IconData icon, MaterialColor color, String name){
    return Column(
    children: <Widget>[
      Icon(icon, color: color,),
      Text(name, style: TextStyle(color:color),),
    ],
    );
  }

   _buildTextSection() {
    return Container(
      margin: EdgeInsets.all(28),
      child:
      Column (
        children: <Widget>[
           Text('潮騒を聞きながら眼下の海を見渡せ、夕暮れには水平線や島前の島々に沈む夕日がとてもロマンティックです。',
          style: TextStyle(
          fontWeight: FontWeight.bold,
          fontSize: 20),),
           Text('高台に展望台からは島前を望むことができます。展望台横には灯台として使われていた灯篭が今でも残っており、那久の人々が毎日火を灯した当時の様子を偲ぶことができます。',
          style: TextStyle(
          fontSize: 16
        ),),
    ]
      )
    );
  }

}


