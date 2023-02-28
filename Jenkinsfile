pipeline {
    agent any 
    stages{
        stage('BUILD') {
            steps{
                 sh '''
                    cd /var/lib/jenkins/workspace/pipeline1
                      make ABC.exe
                '''
            }
        }
    }
}
