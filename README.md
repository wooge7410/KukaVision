# FindCameraDialog

- Dialog for finding connected cameras and selecting one
- ![image](https://github.com/wooge7410/KukaVision/assets/62610686/13935488-7715-4562-89fd-de6edef81916)
- provides std::string of the select IP-Address
  - provides an empty string, if no camera was selected or the dialog was canceled
- Usage:
  ```cpp
  FindCameraDialog fd;
  std::cout << "\nSelectedIP: "<< fd.selectedIP;
  ```

# KukaVision
visual driven grasping

# GUI-Framework
- QT5
- apt install qttools5-dev-tools build-essential libgl1-mesa-dev

