
/**
 * Programmers Level 2 Skill_Trees Question.
 * 
 * @author (sutjjang) 
 * @version (01)
 */
public class Skill_Trees
{
    public int solution(String skill, String[] skill_trees) {
        int answer = 0;
        int index;
        String skt;
        boolean yes;
        for(int n=0;n<skill_trees.length;n++){
            skt=skill;
            yes=true;
            for(int i=0;i<skill_trees[n].length();i++){
                index=skt.indexOf(skill_trees[n].substring(i,i+1));
                if(index>0){
                    yes=false;
                    break;
                }
                else if(index==0){
                    skt=skt.substring(1);
                }
            }
            if(yes){answer++;}
        }
        return answer;
    }
}
