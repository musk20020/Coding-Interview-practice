### 1. 用建構子進行初始化
- 建構子函式要和class同名
- 建構子不能回傳值，連void都不能指定
- 建構子宣告為public

### 2. 製作成.h file
- 因為c++在邊一時不能有兩個檔案都含有main function，所以若是開發的gradbook中含有main function則不能被其他cpp call來重複使用，因此要把包成一個.h檔案以利重複利用。
- 而在要使用此.h的cpp中要include "gradbook.h"，這裡使用的是雙引號“”而不是<>因為這是客製化的class
- 在使用雙引號的情形下會在和call include的檔案同樣路徑下尋找此.h檔