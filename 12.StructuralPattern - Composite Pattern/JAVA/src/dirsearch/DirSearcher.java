package dirsearch;

import java.io.File;
import java.io.IOException;
import java.util.Date;
import java.util.HashSet;

public class DirSearcher {

	private String rootPath = null; // startPath는 파일 경로까지 모두 지정
	private HashSet<File> pathList = null;
	
	public DirSearcher(String rootPath) {
		this.rootPath = rootPath;
	}

	public void printAll() {
		pathList = new HashSet<File>();
		SearchDir(rootPath);
	}

	private void SearchDir(String path) {
		File dir = new File(path); // 디렉토리 저장
		File[] fileList = dir.listFiles();
		try {
			for (int i = 0; i < fileList.length; i++) {
				File file = fileList[i];
				if (file.isFile()) {
					System.out.println(new Date(file.lastModified())
							+ " <NOT DIR> " + file.getName());
				} else if (file.isDirectory()) {
					// 서브디렉토리가 존재하면 재귀적 방법으로 다시 탐색
					System.out.println(new Date(file.lastModified())
					+ " <DIR> " + file.getName());
					SearchDir(file.getCanonicalPath().toString());
					//file.getName()
				}
			}
		} catch (IOException e) {

		}
	}
	public void setPath(String rootPath){
		this.rootPath = rootPath;
	}
}
