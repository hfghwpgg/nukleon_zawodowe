import os
import shutil
import re

def find_highest_version_folders(directory):
    version_folders = {}
    for root, dirs, files in os.walk(directory):
        for dir_name in dirs:
            match = re.match(r'Wersja (\d+)', dir_name)
            if match:
                version = int(match.group(1))
                parent_dir = os.path.dirname(os.path.join(root, dir_name))
                if parent_dir not in version_folders or version > version_folders[parent_dir][1]:
                    version_folders[parent_dir] = (os.path.join(root, dir_name), version)
    return version_folders

def move_files_up_from_version_folders(version_folders):
    for parent_dir, (version_folder, version) in version_folders.items():
        for file_name in os.listdir(version_folder):
            file_path = os.path.join(version_folder, file_name)
            try:
                shutil.move(file_path, parent_dir)
                print(f"Przeniesiono {file_path} do {parent_dir}")
            except Exception as e:
                print(f"Błąd przy przenoszeniu {file_path}: {e}")

def remove_version_folders(version_folders):
    for _, (version_folder, _) in version_folders.items():
        try:
            shutil.rmtree(version_folder)
            print(f"Usunięto folder {version_folder}")
        except Exception as e:
            print(f"Błąd przy usuwaniu folderu {version_folder}: {e}")

if __name__ == "__main__":
    # Zmień tę ścieżkę na swój katalog główny
    main_directory = r"./"
    version_folders = find_highest_version_folders(main_directory)
    move_files_up_from_version_folders(version_folders)
    remove_version_folders(version_folders)
    print("Zakończono przenoszenie plików i usuwanie folderów.")
