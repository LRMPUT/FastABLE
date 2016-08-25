# FastABLE

FastABLE is an accelerated and modified version of OpenABLE that suits the needs of indoor mobile localization. OpenABLE that is an open toolbox that contributes different solutions and functionalities to the research community in the topic of life-long visual localization for autonomous vehicles. The original OpenABLE: https://github.com/roberto-arroyo/OpenABLE

The code is made available under the BSD license. In case of using the software in your own work, we kindly ask you to consider citing the following papers:

FastABLE:
* [1] M. Nowicki, J. Wietrzykowski and P. Skrzypczyński, ``Efficient Vision Data Processing on a Mobile Device for Indoor Localization'', IEEE Signal Processing Letters, 2016 (submitted)

Comparison between OpenABLE and FAB-MAP for indoor localization:
* [2] M. Nowicki, J. Wietrzykowski and P. Skrzypczyński, ``Experimental Evaluation of Visual Place Recognition Algorithms for Personal Indoor Localization'', in International Conference on Indoor Positioning and Indoor Navigation (IPIN 2016), 2016 (to be published)

The FastABLE is heavily based on OpenABLE and therefore we ask you to also cite the original OpenABLE work:

* [3] R. Arroyo, L. M. Bergasa and E. Romera, "OpenABLE: An Open-source Toolbox for Application in Life-Long Visual Localization of Autonomous Vehicles", submitted to Intelligent Transportation Systems Conference (ITSC), Rio de Janeiro (Brazil), November 2016 (in review process).

* [4] R. Arroyo, P. F. Alcantarilla, L. M. Bergasa and E. Romera, "Towards Life-Long Visual Localization using an Efficient Matching of Binary Sequences from Images", in IEEE International Conference on Robotics and Automation (ICRA), pp. 6328-6335, Seattle, Washington (United States), May 2015.

* [5] R. Arroyo, P. F. Alcantarilla, L. M. Bergasa, J. J. Yebes and S. Bronte, "Fast and Effective Visual Place Recognition using Binary Codes and Disparity Information", in IEEE/RSJ International Conference on Intelligent Robots and Systems (IROS), pp. 3089-3094, Chicago, Illinois (United States), September 2014.

* [6] R. Arroyo, P. F. Alcantarilla, L. M. Bergasa, J. J. Yebes and S. Gámez, "Bidirectional Loop Closure Detection on Panoramas for Visual Navigation", in IEEE Intelligent Vehicles Symposium (IV), pp. 1378-1383, Dearborn, Michigan (United States), June 2014.



# Running FastABLE on PUT MC

To verify results obtained in our work, we make publicly availble a dataset recorded inside PUT CM building. The dataset consists of 14 training sequences covering almost corridors inside the first floor of PUT CM in both directions and one test sequence that can be used to evaluate localization. The data was gathered with approx. 10 fps on Samsung Galaxy Note 3.

The dataset can be downloaded from our server with command:

`wget http://lrm.put.poznan.pl/files/Preludium/SP_PUT_CM_1.tar.gz`

Then you need to unpack the data, which can be done with command:

`tar -xzf SP_PUT_CM_1.tar.gz`

You should see 2 directories SP_PUT_CM_1_train and SP_PUT_CM_1_test. The .tar.gz file can be removed with:

`rm SP_PUT_CM_1.tar.gz`

The path to those directories has to be written into config.txt file. It our case it was:

```
trainingSequencePath: /home/michalnowicki/Desktop/SP_PUT_CM_1_train/

testSequencePath: /home/michalnowicki/Desktop/SP_PUT_CM_1_test/
```

The system can be run with command:

`./test_OpenABLE ../config.txt`


# Running FastABLE on Nordlandsbanen dataset

The Nordlandsbanen dataset can be found at http://www.nrk.no/nordlandsbanen/. The dataset consists of 4 synchronized sequence recorded during train operation during 4 seasons. The dataset is available through torrent protocol with torrent files available and mentioned website.

The FastABLE can be run on the following dataset:

`./test_OpenABLE ../config.txt pathToFile.mp4 pathToFile2.mp4`

In our case the path had the following format:

`./test_OpenABLE ../config.txt ~/Desktop/nordlandsbanen.spring.sync.1920x1080.h264.nrk.mp4%2Fnordlandsbanen.spring.sync.1920x1080.h264.nrk.mp4 ~/Desktop/nordlandsbanen.fall.sync.1920x1080.h264.nrk.mp4%2Fnordlandsbanen.fall.sync.1920x1080.h264.nrk.mp4`

Before running please verify the parameters in config.txt. According to [3], the compareLength can be set to 300, while maximum number of frames has to specified due to huge size of the dataset (it is not possible to process it fully).

# Contact

If you have any questions please contact Michal Nowicki (name.surname@put.poznan.pl). More publications of M.Nowicki can be found at http://etacar.put.poznan.pl/michal.nowicki/publications/

