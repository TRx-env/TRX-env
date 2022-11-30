sudo zypper in -y docker docker-compose

sudo zypper in -y gh

sudo zypper in -y emacs

suso zypper in -y clang llvm gcc cmake 

sudo zypper in -t pattern devel_C_C++ devel_qt6 devel_kernel

# sudo zypper in -y devel_python

# install ms edge browser

## Setup
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
sudo zypper ar https://packages.microsoft.com/yumrepos/edge microsoft-edge-dev
## Install
sudo zypper refresh
sudo zypper install microsoft-edge-dev

# install mega_sync

sudo zypper ar https://mega.nz/linux/MEGAsync/openSUSE_Tumbleweed/ mega_sync

sudo zypper --gpg-auto-import-keys  ref

sudo zypper in -y megasync

# install snap__craft

sudo zypper ar https://download.opensuse.org/repositories/system:/snappy/openSUSE_Tumbleweed/ snap_craft

sudo zypper --gpg-auto-import-keys  ref

sudo zypper in -y snapd

systemctl start snapd

snap install netbeans --classic

# install vscode
sudo rpm --import https://packages.microsoft.com/keys/microsoft.asc
sudo sh -c 'echo -e "[code]\nname=Visual Studio Code\nbaseurl=https://packages.microsoft.com/yumrepos/vscode\nenabled=1\ntype=rpm-md\ngpgcheck=1\ngpgkey=https://packages.microsoft.com/keys/microsoft.asc" > /etc/zypp/repos.d/vscode.repo'

sudo zypper ref
sudo zypper in -y code

# install sql-tools

sudo zypper addrepo -fc https://packages.microsoft.com/config/sles/12/prod.repo 
sudo zypper --gpg-auto-import-keys refresh

sudo zypper in -y mssql-tools unixODBC-devel  
sudo zypper refresh
sudo zypper update mssql-tools

echo 'export PATH="$PATH:/opt/mssql-tools/bin"' >> ~/.bashrc
source ~/.bashrc