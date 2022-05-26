## Setup
1. pip install -r requirements.txt
2. Download the yolov3 weights from [here](https://mega.nz/file/XPpBAAaS#dGAi7F7nASr77bhzp1yX6tdVDZtUeYfAukjtAoKhx10 "Yolov3 weights")
3. Move the weights file into the /vision/create/ folder
4. Change directories `cd create/`
5. Create the model `python create_model.py`
6. Change directories `cd ../run/`
7. Run capture `python webcam_detect.py`