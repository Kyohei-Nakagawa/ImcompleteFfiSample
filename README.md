# ImcompleteFfiSample

C言語の不完全な型をDartから利用するサンプル

1. ImCompleteDll\ImcompleteDll.sln を Visual Studio で開く。  
   2019 で動作核を確認済み。  
2. ソリューションをビルドする。  
3. imcomplete_ffi\lib\dll に dll が生成されていることを確認する。  
   出来てなかった場合、Visual Studio のプロパティで出力フォルダを変更する。  
4. VSCode で imcomplete_ffi フォルダを開く。
5. VSCode のターミナルから dart pub get を実行する。
6. dart .\bin\imcomplete_ffi.dart を実行する。
